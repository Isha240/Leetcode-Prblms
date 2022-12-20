int majorityElement(int* arr, int n){
     int voter=arr[0];
     int vote=1;
     for(int i=1;i<n;i++){
         if(arr[i]==voter)++vote;
         else --vote; 
         if(vote==0){
             voter=arr[i];
             vote=1;
         } 
     }
 
      return voter;
}
