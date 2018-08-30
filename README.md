# posist

# You can select option from:
1: insert more<br>
2: see data with node number<br>
3: exit<br>
4: transfer ownership by nodeNumber.<br>

# Folowing functionalities has been added.
1. insert your new node with following values:-<br>
      Input:- a.) float data.<br>
              b.) int parent node number (in case of genesis root insertion NO NEED TO GIVE VALUE bcoz by default set to 0).<br>
              c.) string owner name.<br>
              d.) key to encrypt the data.<br>
2.) see data by giving node number:- <br>
      Input:- a.) int num.<br>
3.) update the ownership of node by node number;<br>
      Input:- a.) int nodeNum.<br>
               b.) string newOwnerName.<br>
# Sample Input.
5.00<br>
"yash"<br>
3<br>
1<br>
4.00<br>
1<br>
"varshney"<br>
3<br>
2<br>
1<br>
3<br>
Explanation:- first:- genesis root value = 5.00.<br>
              (NO NEED  TO GIVE PARENT ID FOR GENESIS NODE.)<br>
              second:- owner name<br>
              third:- key value<br>
              fourth:- option (1 option is selected which is insert new value)<br>
              fifth:- value of node<br>
              sixth:- parent node num<br>
              seventh:- owner name<br>
              eigth:- key value<br>
              ninth:- option (2 is selected which is show data after decryption)<br>
              tenth:- node num to give data<br>
              eleventh:- option 3 is selected to exit.<br>
