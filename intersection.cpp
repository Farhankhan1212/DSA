 

	
int i = 0, j= 0;
vector<int> ans;
while(i<n && j<m) {

    if(arr1[i]==arr2[j])
{
    ans.push_back(arr1[i]);
    i++;
    j++;
}
else if (arr1[i] < arr2[j]){
    i++;
}
 else
 {
    j++;
}
}
