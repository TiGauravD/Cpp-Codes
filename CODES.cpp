#include <bits/stdc++.h>
using namespace std;

typedef long long           lol;
typedef unsigned long long  ulol;
#define sa                  <<" "
#define ci                  cin>>
#define co                  cout<<
#define el                  <<'\n' 
#define te(i)               int i; cin>>i
#define ten                 te(n)
#define tem                 te(m)
#define tek                 te(k)
#define tex                 te(x)
#define tey                 te(y)
#define tez                 te(z)
#define pb                  push_back
#define ub                  upper_bound
#define lb                  lower_bound
#define bs                  binary_search
#define all(x)              x.begin(), x.end()
#define fo(i,a,b,p)         for (int i=a; i<b; i+=p)
#define foi(n)              fo(i,0,n,1)
#define foj(n)              fo(j,0,n,1)
#define foin                foi(n)
#define foim                foi(m)
#define fojn                foj(n)
#define fojm                foj(m)
#define ff                  first
#define ss                  second    
#define ex                  return 0
#define cnu                 continue
/////////////////////////////////////////////////////////
//bool sorted(int arr[], int n){
//    if(n==1){

//    return true;
//   }
//    return (arr[0]<arr[1] && sorted(arr+1,n-1));    
//}
//int main(){
//  int arr[]={1,2,3,4,5,6,7};
//  cout<<sorted(arr,7)<<endl; 
//  return 0;
//}
/////////////////////////////////////////////////////////
//void dec(int n){
//  if(n==0){
//    return;
//  }
//  cout<<n<<" ";
//  dec(n-1);
//}
//void inc(int n){
//  if(n==0){
//    return;
//  }
//  inc(n-1);
//  cout<<n<<" ";  
//}
//int main(){
//  int n;
//  cin>>n;
//  dec(n);
//  cout<<endl;
//  inc(n);
//  return 0;
//}
//////////////////////////////////////////////////////////
//int firstocc(int arr[],int n,int i,int k){
//  if(i==n)
// return -1;
//  
//  if(arr[i]==k){
//    return i;
//  }
//  return firstocc(arr,n,i+1,k);
//}
//int lastocc(int arr[],int n,int k){
//  if(n<0){
//    return -1;
//  }
//  if(arr[n]==k){
//    return n;
//  }
//  return lastocc(arr,n-1,k);
//}
//int main(){
//  int n=14;
//  int arr[]={1,4,4,3,3,2,4,5,5,6,7,8,9,9};
///  int k;
// cin>>k;
//  cout<<firstocc(arr,n,0,k)<<endl;
//  cout<<lastocc(arr,n,k);
//  return 0;
//}
//////////////////     PERMUTATION OF STRING          ///////////////////
//void permutation(string s,string ans){
//  if(s.length()==0){
//    cout<<ans<<endl;
//    return;
//  }
//  for(int i=0;i<s.length();i++){
//    char ch=s[i];
//   string ros= s.substr(0,i)+s.substr(i+1);
//    permutation(ros,ans+ch);
//  }  
//}
//int main(){
//   permutation("ABC","");
//  return 0;
//}
/////////////////////////////////////////////////////////
//int countpath(int s,int e){
//  if(s>e){
//    return 0;
//  if(s==e){
//    return 1;
//  }
//  int count=0;
//  for(int i=1;i<=6;i++){
//  count+=countpath(s+i,e);
//  }
//  return count;
//}
//int main(){
//   cout<<countpath(0,5);
//  return 0;
//}
//////////////////////////////////////////////////////////
//int countpathmaze(int x,int y,int n){
//  if(x>n-1 || y>n-1){
//    return 0;
//  }
//  if(x==n-1 && y==n-1){
//    return 1;
//  }
//  return countpathmaze(x+1,y,n)+countpathmaze(x,y+1,n);
//}
//int main(){
//  cout<<countpathmaze(0,0,5);
//  return 0;
//}
///////////////////////////////////////////////////////
//int tillingways(int n){
//    if(n==0){
//        return 0;
//    }
//    if(n==1){
//        return 1;
//    }
//    return tillingways(n-1)+tillingways(n-2);
//}
//int main(){
//    cout<<tillingways(4);
//    return 0;
//}
///////////////////////////////////////////////////////
//int friendpairing(int n){
//    if(n==0 || n==1 || n==2){
//        return n;
//    }
//    return friendpairing(n-1) + friendpairing(n-2)*(n-1); 
//}
//int main(){
//    cout<<friendpairing(4);
//    return 0;
//}
////////////////////////////////////////////////////////
//int knapsack(int value[],int wt[],int n,int W){
//    if(n==0 || W==0){
//        return 0;
//    }
//    if(wt[n-1]>W){
//        return knapsack(value,wt,n-1,W);
//    }
//    return max((knapsack(value,wt,n-1,W-wt[n-1]) + value[n-1]),knapsack( value,wt,n-1,W));
//}
//int main(){
//    int wt[]={10,20,30};
//    int value[]={100,50,150};
//    cout<<knapsack(value,wt,3,50);
//    return 0;
//   }
///////////////////////////////////////////////////////////
//void reverse(string s){
//    if(s.length()==0){
//        return; 
//    }
//    string ros=s.substr(1);
//    reverse(ros);
//    cout<<s[0];
//}
//int main(){
//    reverse("binod");
//    return 0;
//}
/////////////////////////////////////////////////////////////
//void replacepi(string s){
//    if(s.length()==0){
//        return;
//    }
//    if(s[0]=='p' && s[1]=='i'){
//        cout<<"3.14";
//        replacepi(s.substr(2));
//    }
//    else{
//        cout<<s[0];
//        replacepi(s.substr(1));
//    }
//}
//int main(){
//    replacepi("piasdaspiasdpi");
//    return 0;
//}
/////////////////////////////////////////////////////////
//void towerofhanoi(int n,char src,char dest,char helper){
//    if(n==0){
//        return;
//    }
//    towerofhanoi(n-1,src,helper,dest);
//    cout<<"move from "<<src<<" to "<<helper<<endl;
//    towerofhanoi(n-1,helper,dest,src);
//}
//int main(){
//    towerofhanoi(3,'S','D','H');
//    return 0;
//}
/////////////////////////////////////////////////////////
//string removedup(string s){
//    if(s.length()==0){
//        return "";
//    }
//    char ch=s[0];
//    string ans=removedup(s.substr(1));
//    if(ch==ans[0]){
//      return ans;
//    }
//    return ch+ans;
//}
//int main(){
//    cout<<removedup("aaadddaavvssswwwegoe");
//    return 0;
//}
///////////////////////////////////////////////////////
//string moveallx(string s){
//    if(s.length()==0){
//        return "";
//    }
//    char ch=s[0];
//    string ans=moveallx(s.substr(1));
//    if(ch=='x'){
//        return ans+ch;
//    }
//    return ch+ans;
//}
//int main(){
//    cout<<moveallx("asoxxasioixxaoimxa");
//    return 0;
//}
////////////////////////////////////////////////////
//void subseq(string s,string ans){
//    if(s.length()==0){
//        cout<<ans<<endl;
//        return;
//    }    
//    char ch = s[0];
//    subseq(s.substr(1),ans);
//    subseq(s.substr(1),ans + ch);
//}
//int main(){
//    subseq("ABC","");
//    return 0;
//}
///////////////////////////////////////////////////
//void subseq(string s,string ans){
///    if(s.length()==0){
//        cout<<ans<<endl;
//        return;
//    }    
//    char ch = s[0];
//    int ascii=ch;
//    subseq(s.substr(1),ans);
//   subseq(s.substr(1),ans + ch);
//   subseq(s.substr(1),ans + to_string(ascii));
//}
//int main(){
//    subseq("AB","");
//    return 0;
//}
//////////////////////////////////////////////////
//string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//void keypad(string s,string ans){
//    if(s.length()==0){
//        cout<<ans<<endl;
//       return;
//    }
//    char ch=s[0];
//    string code = keypadarr[ch-'0'];
//    string ros = s.substr(1);
//    for(int i=0;i<code.length();i++){
//        keypad(ros,ans +code[i]);
//    }
//}
//int main(){
//    keypad("29","");
//    return 0;
//}
/////////////*************************/////////////
//vector<vector<int>> ans;
//void permute(vector<int> &a,int idx){
//    if(idx == a.size()){
//        ans.push_back(a);
//        return;
//    }
//    for(int i=idx;i<a.size();i++){
//        swap(a[i],a[idx]);
//        permute(a,idx+1);
//        swap(a[i],a[idx]);         
//        }
//        return;
//}
//int32_t main(){
//    int n; cin>>n;
//    vector<int> a(n);
//    for(auto &i : a)
//      cin>>i;
//    permute(a,0);
//    for(auto v : ans){
//      for(auto i : v)
//         cout<<i<<" ";
//    cout<<endl;     
//    }    
//    return 0;
//}
////////////////********************/////////////
//void helper(vector<int> a,vector<vector<int>> ans,int idx){
//    if(idx == a.size()){
//        ans.push_back(a);
//        return;
//    }
//    for(int i=idx;i<<a.size();i++){
//          if(i!=idx && a[i]==a[idx])
////             continue;
//        swap(a[i],a[idx]);
//        helper(a,ans,idx+1);
//    }
//}
//vector<vector<int>> permute(vector<int> &nums){
//    sort(nums.begin(),nums.end());
//    vector<vector<int>> ans;
//    helper(nums,ans,0);
//    return ans;
///}
//int32_t main(){
//    int n;cin>>n;
//    vector<int> a(n);
//    for(auto &i : a){
//        cin>>i;
//    }
//    vector<vector<int>> ans=permute(a);
//    for(auto v : ans){
//       for(auto i : v){
//           cout<<i<<" ";
//           }
//    cout<<endl;       
//    }
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////
/*bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinmaze(int** arr,int x,int y,int n,int** solarr){
    if(x==n-1 && y==n-1){
        solarr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(ratinmaze(arr,x+1,y,n,solarr)){
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solarr)){
            return true;
        }
        solarr[x][y]=0;
        return false;
    }
    return false;
}
int main(){
    int n;cin>>n;
    int** arr =new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)cin>>arr[i][j];
    int** solarr =new int*[n];
    for(int i=0;i<n;i++){
        solarr[i]=new int[n];
        for(int j=0;j<n;j++)solarr[i][j]=0;
    }
    if(ratinmaze(arr,0,0,n,solarr)){
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<solarr[i][j]<<" ";
        cout<<endl;
    }
    }
    return 0;
}*/////////////////////////////////////////////////////////////////////////
/*bool isSafe(int**arr,int x,int y,int n){
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
        return false;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;col++;
    }
    return true;
}
bool nQueen(int** arr,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;

            if(nQueen(arr,x,n)){
                return true;
            }

            arr[x][col]=0;
        }
    }

    return false;
}
int main(){
   int n;
   cin>>n;
   int** arr = new int*[n];
   for(int i=0;i<n;i++){
       arr[i]=new int[n];
       for(int j=0;j<n;j++){
           arr[i][j]=0;
       } 
   } 
   if(nQueen(arr,0,n)){
       for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
                }
        cout<<endl; 
       } 
   }
    return 0;
}
*////////////////////////////////////////////////////////////////////////////////////
/*void primeseive(int n){
int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
int n;cin>>n;
primeseive(n);
    return 0;
}
*////////////////////////////////////////////////////////////////////////////
/*void primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main(){
    int n;cin>>n;
    primefactor(n);
    return 0;
}
*//////////////////            MERGE SORT           ///////////////////////
/*void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
       arr[k]=a[i];
       k++;i++;
    }
    while(j<n2){
       arr[k]=b[j];
       k++;j++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int main(){
    int arr[]={2,4,45,67,89,1,23,42};
    mergesort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/////////////////                QUICK SORT                ///////////////////
/*void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r){
    int pviot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pviot){
            i++;
            swap(arr,i,j);  
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}
int main(){
    int arr[]={2,5,6,8,24,74,85,12,45,33};
    quicksort(arr,0,9);   
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
*//////////////////          COUNT  INVERSION         /////////////////////
/*long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            inv+=n1-i; 
            k++;j++;
        }
    }
    while(i<n1){
       arr[k]=a[i];
       k++;i++;
    }
    while(j<n2){
       arr[k]=b[j];
       k++;j++;
    }
    return inv;
}
long long mergesort(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergesort(arr,l,mid);
        inv+=mergesort(arr,mid+1,r);

        inv+=merge(arr,l,mid,r);
    }
    return inv;
}
int main(){
    int arr[]={9,5,3,2,7,8};
    co mergesort(arr,0,6);
    
    return 0;
}
*////////////////              COUNT SORT             ///////////////////
/*void quicksort(int arr[],int n){
    int k=arr[0];
    
    for(int i=0;i<n;i++){ 
        k=max(k,arr[i]);
    }
    
    int count[10]={0};
    
    for(int i=0;i<n;i++){
         count[arr[i]]++;
    }
    
    for(int i=1;i<=k;i++){
         count[i]+=count[i-1];
    }
    
    int output[n];
    
    for(int i=n-1;i>=0;i--){
         output[--count[arr[i]]]=arr[i];
    }
    
    for(int i=0;i<n;i++){
         arr[i]=output[i];
    }
}
int main(){
    int n=8;
    int arr[8]={1,7,6,2,7,1,2,9};
    quicksort(arr,n);
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}*/
//////////////////////            DNF  SORT            //////////////////////////
/*void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnfsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,mid,low);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else {
            swap(arr,mid,high);
            high--;
        }
    }
}
int main(){
    int arr[10]={1,0,2,2,2,0,0,1,1,1};
    dnfsort(arr,10);
    for(int i=0;i<10;i++)cout<<arr[i]<<" ";
    return 0;
}*/
////////////////////////       WAVE   SORT           /////////////////////////////
/*void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void wavesort(int arr[],int n){
    int i=1;
    while(i<n-2){
        if(arr[i-1]<arr[i]){
            swap(arr,i-1,i);
        }
        if(arr[i]>arr[i+1]){
            swap(arr,i,i+1);
        }
        i+=2;
    }
}
int main(){
    int arr[10]={5,4,8,9,7,3,11,12,6,2};
    wavesort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
/////////////////////////       BASIC OF LINKED LIST      /////////////////////////
/*class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* &head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
}
void insertattail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;

    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deletehead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->data==val){
        deletehead(head);
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertathead(head,5);
    display(head); 
    deletion(head,3);
    display(head); 



    return 0;
}
*///////////////////////  REVERVSING  TNE LINKED LIST    /////////////////
class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertattail(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

int main (){
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    head=reverse(head);
    display(head);
    return 0;
}
