// Container with Most Water Problem  Lc -11


    //Brute Force 
    //can't we solve this using two pointer only 
    //brute force just find all the possible and return the maximum among them 
    int ans=0; 
    int n=height.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int wi=j-i;
            int hi=min(height[i],height[j]);
            int cw=wi*hi;
            ans=max(ans,cw);
        }
    }
    return ans;


    //Optimal Approach
    int st=0;
    int end=n-1;
    int ans=0;
    while(st<end){
        int wi=end-st;
        int hi=min(height[st],height[end]);
        int cw=wi*hi;
        ans=max(ans,cw);

        ///which to increase or decrease is based on the smaller value
        if(height[st]<height[end]){
            st++;
        }else{
            end--;
        }
    }
    return ans;

        