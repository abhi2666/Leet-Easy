class Solution {
public:
    int passThePillow(int n, int time) {
        int flag = 0;
        int i = 1;
        while(time--)
        {
            if(i == n)
            {
                flag = 1;
            }
            else if(i == 1){
                flag = 0;
            }
            
            if(flag == 0){
                i++;
            }else{
                i--;
            }

        }
        return i;
    }
};