void showVector(vector<int> b){
	cout << "[";
	for(unsigned int i = 0; i < b.size(); i++){
		cout << b[i] ;
		if(i>b.size()) cout << "]";
		else cout << " ";
	}
}