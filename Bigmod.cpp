int bigmod(ll b,ll ex, int M) {
    int an=1,rema= b%M;
      while(ex!=0){
            if(ex%2==1) an = (an*rema)%M;
                rema=(rema*rema)%M,ex/=2;
                  }
        return an;}
