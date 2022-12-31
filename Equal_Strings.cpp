// // Author Sapnil Patel
// // Date:-13/06/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int size;
        cin >> size;
        char a[size], b[size];
        cin >> a >> b;
        int count=0;
        vector<char> v;
        for (int i = 0; i < size; i++)
        {
            if (a[i] != b[i])
            {
                v.push_back(b[i]);
                count++;
            }
        }
        // sort( v.begin(), v.end() );
        // std::unique(v.begin(),v.begin()+size);
        // std::unique(v.begin(),v.end());
        // v.erase( unique( v.begin(), v.end() ), v.end() );
        for (int i = 0; i < v.size(); i=i+2)
        {
            if (v[i] == v[i + 1])
            {
                count-=1;
            }
        }

        cout << "Ans:- " << count << endl;

        // cout<<v.size()<<endl;
    }
    return 0;
}

// int main()
// {
//     int T;
//     cin>>T;
//     while(T--)
//     {
//         int size;
//         cin>>size;
//         char a[size],b[size];
//         set<char> s;
//         cin>>a>>b;
//         for(int i=0;i<size;i++)
//         {
//             if(a[i]!=b[i])
//             {
//                 s.insert(b[i]);
//             }
//         }
//         cout<<s.size()<<endl;

//     }
// }