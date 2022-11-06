// https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int notes[] = {1,2,5,10,20,50,100,200,500,2000};
        int i = 9;
        vector<int> v;
        while(i>=0){
            if(N==0)
                break;
            else{
                while(N>=notes[i]){
                    v.push_back(notes[i]);
                    N-=notes[i];
                }
            i--;
            }
        }
        return v;
    }
};
