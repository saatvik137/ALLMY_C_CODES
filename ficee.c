#include<stdio.h>

		
		long long int f[100004];
		long long int powr(long long int x, long long int y, long long int m) {
			long long int an = 1;
			while(y > 0) {
				if(y%2 == 1) {
					an = ((an%m) * (x%m))%m;
				}
				x = ((x%m) * (x%m))%m;
				y/=2;
			}
			return an;
		}
		
		long long int Find(long long int  n, long long int k, long long int m) {
			long long an = f[n];
			an = an * powr(f[k], m - 2, m);
			an = an % m;
			an = an * powr(f[n-k], m - 2, m);
			an = an % m;
			return an;
		}

int main()
{           
            long long int m = 1000000007;
			f[0] = 1;
			long long int i;
			long long int v = 1;
			for(i = 1; i <= 100002; i++) {
				v = ((i%m) * (v%m))%m;
				f[i] = v;
			}
			int test ;
			scanf("%d",&test);
			while(test--) {
				int i ;
				long long int N, k;
				long long int  sum = 0;
				scanf("%lld%lld",&N,&k);
				long long int ans[N];
				long long int count = 0;
				for(i = 0; i < N; i++) {
					scanf("%d", &ans[i]);
					if(ans[i] == 0) {
						count++;
					}
				}
				N-=count;
				if(k > N) {
					if(count == 0) {
						sum = powr(2, N - 1, m);
					}
					else {
						sum = powr(2, N, m);
					}
				}
				else {
					if(count == 0) {
						if(k <= N/2) {
							while(k >= 0) {
								sum = (sum%m) + (Find(N, k, m)) % m;
								k-=2;
							}
						}
						else {
							k+=2;
							while(k <= N) {
								sum = (sum + Find(N, k, m))%m;
								k+=2;
							}
							sum = (powr(2, N - 1, m) - sum + m)%m;
						}
					}
					else {
						if(k <= N/2) {
							while(k >= 0) {
								sum = (sum + (Find(N, k, m)))%m;
								k--;
							}
						}
						else {
							k++;
							while(k <= N) {
								sum = (sum + Find(N, k, m))%m;
								k++;
							}
							sum = (powr(2, N, m) - sum + m)%m;
						}
					}
				}
				printf("%lld",sum) ;
			}
			return 0;
		}}
