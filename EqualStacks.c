int equalStacks(int h1_count, int* h1, int h2_count, int* h2, int h3_count, int* h3) {
     int s1=0,s2=0,s3=0,i;

     for(i=0;i<h1_count;i++){
         s1+=h1[i];
     }
     for(i=0;i<h2_count;i++){
         s2+=h2[i];
     }
     for(i=0;i<h3_count;i++){
         s3+=h3[i];
     }
     int top1=0,top2=0,top3=0;
     while(1){
         if(top1==h1_count || top2==h2_count || top3==h3_count)
            return 0;

        if(s1==s2 && s2==s3)
            return s1;

        if(s1>=s2 && s1>=s3)
            s1-=h1[top1++];
        else if (s2>=s1 && s2>=s3)
                s2-=h2[top2++];
            else if (s3>=s1 && s3>=s2)
                    s3-=h3[top3++];
     }
}
