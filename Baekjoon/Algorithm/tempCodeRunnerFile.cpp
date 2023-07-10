 i = 1; i < rep; i++){
        int prev = vec[i-1];
        if(vec[i] == prev){
            cnt++;
        } else {
            most.push_back({prev,cnt});
            cnt = 1;
        }

        if(i == rep - 1){
            most.push_back({vec[i],cnt});
        }
        
    }