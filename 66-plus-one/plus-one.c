/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* a, int n, int* returnSize) {
   if(a[n-1]!=9){
    a[n-1]=a[n-1]+1;
    *returnSize=n;
    return a;
   }
   int cnt=0;
   for(int i=n-2;i>=0;i--){
    if(a[i]!=9 && a[i+1]==9){
        a[i]=a[i]+1;
        for(int j=i+1;j<n;j++){
            a[j]=0;
        }
        *returnSize=n;
        return a;
    }
   }
   n=n+1;
   a=realloc(a,n*sizeof(int));
   a[0]=1;
   for(int i=1;i<n;i++){
    a[i]=0;
   }
   *returnSize=n;
   return a;
}