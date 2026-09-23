 #include<iostream>
 using namespace std;
 int main()
 {
 int P_sal,C_sal;

    cout<<"Enter previous salary";
    cin>>P_sal;
    cout<<"Enter current salary";
    cin>>C_sal;
    int hike;
    hike= C_sal-P_sal;
    cout<<"hike="<<hike;
    int hk1;
    hk1 = (hike/P_sal)*100;
    cout<<"hk1="<<hk1;
    return 0;
}
