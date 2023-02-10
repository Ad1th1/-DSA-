// https://practice.geeksforgeeks.org/problems/45fa306a9116332ece4cecdaedf50f140bd252d4/1

class Solution{
public:
    int maxInstance(string s){
        return min({count(s.begin(),s.end(),'b'),count(s.begin(),s.end(),'a'),count(s.begin(),s.end(),'l')/2,count(s.begin(),s.end(),'o')/2,count(s.begin(),s.end(),'n')});
    }
};
