#include <vector>
#include <iostream>
#include <cmath>
# define MAX 50000
using namespace std;

int primeNum[MAX+1];
int cnt_prime=0;
void eratos(){
    for(int i=2; i<=MAX; i++)
        primeNum[i]=1;
    for(int i=2; i<=sqrt(MAX); i++)
    {
        if(primeNum[i]==0)
            continue;
        for(int j=pow(i,2); j<=MAX; j+=i)
            primeNum[j] = 0;
    }
}
void findPrime(vector<int> &nums, int L, int index, int sum)
{
    if (L==3)
    {
        if(primeNum[sum])
            cnt_prime++;
        return;
    }
    for(int i =index; i<nums.size(); i++)
        findPrime(nums,L+1,i+1,sum+nums[i]);
}

int solution(vector<int> nums) {
    eratos();
    findPrime(nums,0,0,0);
    return cnt_prime;
}