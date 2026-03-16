class Solution {
  public:
  
    void merge(vector<int>& arr,int l,int mid,int r)
    {
        int i=l,j=mid+1;
        vector<int> temp;
        while(i<=mid  && j<=r)
        {
            if(arr[i]<=arr[j])
            {
            temp.push_back(arr[i]);
                i++;
            }
            else
            {
            temp.push_back(arr[j]);
                j++;
            }
        }
        //append the left out part 
        while(i<=mid)
        {
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=r)
        {
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=0;i<temp.size();i++)
        {
            arr[l+i]=temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l == r )
        return ;
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
};