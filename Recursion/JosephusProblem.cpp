// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// GeeksForGeeks: Josephus problem
int josephus(int n, int k)
{
   //Your code here
   if(n==1)
   {
       return 1;
   }
   else{
   return (josephus(n-1,k)+k-1)%n+1;
   }
   
}
