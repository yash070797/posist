#include <bits/stdc++.h>
using namespace std;

int nodeNum =1;
typedef struct node{
    string data;
    int nodeNumber;
    string owner;
    int parentNodeNumber;
    set<int> child;
    int key;
    float sum;
}node;

node* newNode(string data,int paNodeID,string owner,int key)
{
    node* temp = new node();
    temp->data = data;
    temp->owner = owner;
    temp->nodeNumber = nodeNum++;
    temp->parentNodeNumber = paNodeID;
    temp->sum=0;
    temp->key = key;
    return temp;
}
//uses caesar cipher to encrypt
string encrypt(float f,string owner,int key)
{
    string result = "";
    result = owner+"_"+to_string(f+key);
    return result;
}
float decrypte(string da,int key)
{
    float result = 0.00;
    string temp= "";
    for(int i=0;i<da.length();i++)
    {
        if(da[i] == '_')
        {
            temp = da.substr(i+1);
            break;
        }
    }
    return stof(temp)-key;
}
int main()
{
    unordered_map<int, node*> m;
    float da=0.00;
    cout<<"enter genesis node data:- ";
    cin>>da;
    int genesisData = da;
    int parId = 0;
    cout<<"enter owner name:- ";
    string ownerName;
    cin>>ownerName;
    int key;
    cout<<"enter key value to encrypt:- ";
    cin>>key;
    string enc = encrypt(da,ownerName,key);
    node* root = newNode(enc,parId,ownerName,key);
    m.insert(make_pair(1,root));
    do{
        cout<<"1: insert more\n 2: see data with node number\n 3: exit\n 4: transfer ownership by nodeNumber";
        int option;
        cin>>option;
        switch(option)
        {
        case 1:
        {
            cout<<"enter node data:- " ;
            cin>>da;
            cout<<"enter parent node id:- ";
            cin>>parId;
            cout<<"enter owner name:- ";
            cin>>ownerName;
            cout<<"enter key value to encrypt:- ";
            cin>>key;
            enc = encrypt(da,ownerName,key);
            node* temp = newNode(enc,parId,ownerName,key);
            if(m.at(parId)->sum+ da > genesisData)
            {
                cout<<"cannot insert bcoz parent sum limit exceed"<<endl;
                            break;
            }
            else{
                m.insert(make_pair(nodeNum-1,temp));
                m.at(parId)->child.insert(nodeNum);
                m.at(parId)->sum+=da;
            }
            break;
        }
        case 2:
            {
                int num;
                cout<<"enter node number:- ";
                cin>>num;
                node* temp = m.at(num);
                float f = decrypte(temp->data,temp->key);
                cout<<"Node value:- "<<f<<endl;
               // cout<<"encrypted string:- " <<temp->data<<endl<<endl;
                break;
            }
        case 3:
            {
                cout<<"EXITING............"<<endl;
                return 0;
            }
        case 4:
        {
            cout<<"enter transfer ownership nodeNum";
            int num;
            cin>>num;
            cout<<"enter name to whom to tranfer :- ";
            string newOwnerName ="";
            cin>>newOwnerName;
            m.at(num)->owner = newOwnerName;
            break;
        }
        default:
            {
                cout<<"enter a valid input"<<endl;
            }
    }

}while(1);
return 0;
}
