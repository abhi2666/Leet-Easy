int passThePillow(int n, int time) {
        int i=1,var = 0;
        int flag=1;
        while(time--){
            for(i=1;i<=time;i++){
                if(flag%2 != 0){
                    var++;
                }
                else{
                    var--;
                }
            }
            flag++;
        }
        return var;
}