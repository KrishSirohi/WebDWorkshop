int main(){
    int cp;
     cin>>cp;
     int sp;
     cin>>sp;
     if(cp<sp){
         cout<<"profit";
     }
     if(cp>sp){
         cout<<"loss";
     }
     if(sp==cp){
        cout<<"no profi no loss";
     }
}