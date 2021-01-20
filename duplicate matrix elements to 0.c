int main()
{
    int r,c,arr[50][50],brr[50][50],crr[50][50],lst[100];
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int f=0;
            for(int s=0;s<=k;s++){
                if (lst[s]==arr[i][j]){
                    brr[i][j]=0;
                    f=1;
                    break;
                }
            }
            if(f!=1){
                brr[i][j]=arr[i][j];
                lst[k]=arr[i][j];
                k++;
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            crr[i][j]=arr[i][j]-brr[i][j];
            printf("%d",crr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
