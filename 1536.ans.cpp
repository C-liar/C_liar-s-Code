#include <bits/stdc++.h>
using namespace std;
int fa[1000001], n, m, x, y;
int find(int x)//并查集(路径压缩) 
{
    if(x != fa[x])
	//当x不等于它的爸爸时(当它是祖先时，它没有爸爸) 
    {
        fa[x] = find(fa[x]);//继续找他的爸爸的爸爸 
    }
    return fa[x];//返回祖先 
}//查找 
void unity(int x, int y)
{
    int r1 = find(x);//找到x的祖先 
    int r2 = find(y);//找到y的祖先 
    fa[r1] = r2;
	//祖先和祖先结为父子(谁是父亲谁是儿子都可以) 
}//合并 
int main()
{
	while(true)
	{
		int ans = 0;//ans要在循环中定义为0
		scanf("%d", &n);
		if(n == 0)
		{
			return 0;
		}
		scanf("%d", &m);
	    for(int i = 1; i <= n; i++)
	    {
	        fa[i] = i;//初始化自己的父亲是自己 
	    }
	    for(int i = 1; i <= m; i++)
	    {
	        scanf("%d %d", &x, &y);
	        unity(x, y);//合并x和y 
	    }
	    for(int i = 1; i <= n; i++)
	    {
	    	if(find(i) == i)//自己的父亲等于自己本身
	    	{
	    		ans++;
			}
		}
		printf("%d\n", ans - 1);//答案减一 
	}
    return 0;
}
