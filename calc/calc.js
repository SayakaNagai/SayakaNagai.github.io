Calc = function( str )
{
    var ans = 0;
    var data = String(str).split('');
    
    for(var i=0;i<data.length;i++){
	if( data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/' || data[i] == '(' || data[i] == ')' || isNaN(data[i]) == false ){

	}else{
	    data[data.length-1]="ERROR";
	}
    }

    //+,-,*,/
    for(var i=0;i<data.length-1;i++){
	if(data[i] == '*'){
	    ans = Number(data[i-1]) * Number(data[i+1]);
	    data[i-1] = ans;
	    data[i] = "+";
	    data[i+1] = 0;
	}
	if(data[i] == '/'){
	    ans = Number(data[i-1]) / Number(data[i+1]);
	    data[i-1] = ans;
	    data[i] = "+";
	    data[i+1] = 0;
	}
    }

    for(var i=0;i<data.length-1;i++){
	if(data[i] == '+'){
	    ans = Number(data[i-1]) + Number(data[i+1]);
	    data[i+1] = ans;
	}
	if(data[i] == '-'){
	    ans = Number(data[i-1]) - Number(data[i+1]);
	    data[i+1] = ans;
	}
    }

    return data[data.length-1];
}
/*
Calc2 = function( str )
{
    var data = String(str).split('');
    var eq = 0;
    var ans;
    var start = 0;
    var end = 0;
    for(var i=0;i<data.length;i++){
	if(data[i] == '('){
	    start = i;
	    while(data[i+1] != ')'){
		if(data[i+1] != ')'){ eq =  eq + String(data[i+1]); } 
		i++;
		end = i+1;
	    }
	    var data2 = String(eq).split(',');
	    ans = Calc(data2);
    }
    document.write(start);
    document.write(end);
    return ans;
    } 
*/

getParameter = function(){
    var url_string = window.location.href;
    //var url_string = "http://1.2.3.4/calc?6/3+4";
    var url = new URL( url_string );
    var data = url.search.split("?")[1];
    return data;
} 
