class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        
            
        return (C==0 && A==B) || ((C>0 && B>=A || C<0 && A>=B) && ((B-A)%C==0));
    }
};
