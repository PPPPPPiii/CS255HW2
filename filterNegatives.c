int filterNegatives(int* arr, int n, int* result){
    //copy the non-negative numbers in arr into result
    //return the size of result
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] >=0){
            result[count] = arr[i];
            count += 1;
        }
    }

    
    return count;
}
