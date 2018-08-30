# posist

# You can select option from:
1: insert more\n
2: see data with node number
3: exit
4: transfer ownership by nodeNumber.

# Folowing functionalities has been added.
1. insert your new node with following values:-
      Input:- a.) float data.
              b.) int parent node number (in case of genesis root insertion NO NEED TO GIVE VALUE bcoz by default set to 0).
              c.) string owner name.
              d.) key to encrypt the data.
2.) see data by giving node number:- 
      Input:- a.) int num.
3.) update the ownership of node by node number;
      Input:- a.) int nodeNum.
               b.) string newOwnerName.
# Sample Input.
5.00
"yash"
3
1
4.00
1
"varshney"
3
2
1
3
Explanation:- first:- genesis root value = 5.00.
              (NO NEED  TO GIVE PARENT ID FOR GENESIS NODE.)
              second:- owner name
              third:- key value
              fourth:- option (1 option is selected which is insert new value)
              fifth:- value of node
              sixth:- parent node num
              seventh:- owner name
              eigth:- key value
              ninth:- option (2 is selected which is show data after decryption)
              tenth:- node num to give data
              eleventh:- option 3 is selected to exit.
