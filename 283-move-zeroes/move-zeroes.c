void moveZeroes(int* a, int n) {
    int count=0;
    int i,j=0;
    for(i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
       else{
        count++;
       }
    }
    while(count!=0){
        a[j]=0;
        count--;
        j++;
    }
}