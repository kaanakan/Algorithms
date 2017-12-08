vector<int> sumR(vector<int> lst)
{
    reverse(lst.begin(),lst.end());
    for(int i=1; i<lst.size(); i++)
        lst[i]=lst[i]+lst[i-1];
    reverse(lst.begin(),lst.end());
    return lst;
}

int max_h ( vector <int> s1, vector <int> s2, vector <int> s3)
{
    int h=0;
    for(int i=0; i<s1.size(); i++)
        if(find(s2.begin(),s2.end(),s1[i]) != s2.end())
            if(find(s3.begin(),s3.end(),s1[i]) != s3.end())
            {
                h=s1[i];
                break;
            }
    return h;
}

int main()
{
    ifstream infile("i.txt");
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    vector<int> h1(n1),h2(n2),h3(n3);
    for(int i=0; i<n1; i++)
        cin>>h1[i];
    for(int i=0; i<n2; i++)
        cin>>h2[i];
    for(int i=0; i<n3; i++)
        cin>>h3[i];

    h1=sumR(h1);
    h2=sumR(h2);
    h3=sumR(h3);

    if(h1.size()<=h2.size() && h1.size()<=h3.size())
        cout<<max_h(h1,h2,h3);
    else if(h2.size()<=h1.size() && h2.size()<=h3.size())
        cout<<max_h(h2,h1,h3);
    else
        cout<<max_h(h3,h1,h2);
    return 0;
}