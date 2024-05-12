using namespace std;

int dicecombination( int n){
    int dp[];

    for( int i=1;i<=6; i++)
    {
        dp[0]=1;
        if(i>n)
        {
            break;
            dp[n]+=dicecombination(n-i,dp);
        }

        
    }
    return dp[n];
}

int main(){

    int j;
    cout<< "Enter the number:";
    cin>> j;
    cout<< dicecombination(j);
    

}