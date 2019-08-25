function exec() { 
    
    var textForm1 = document.getElementById("textForm1").value;
    var textForm2 = document.getElementById("textForm2").value;
    var result = "";
    if( textForm1 > 0 ) { 
	if ( textForm2 >= 200 && textForm2 <= 300 ) {
	    result = "機器A";
	} 
	else if ( textForm2 > 300 ) {
	    result = "機器B";
	}
	else {
	    result = "条件に合う機器は見つかりませんでした。"
	}
    } else {
	result = "圧力は0以上です。"
    }

    var elem = document.getElementById("output");
    elem.innerHTML = result;
    var elem2 = document.getElementById("output2");
    elem2.innerHTML = "";
    if( result == "機器A" ) {
	elem2.innerHTML = "<img src ='img/img_vrv_x_list01.jpg'>";
    } else if( result == "機器B" ) {
	elem2.innerHTML = "<img src ='img/img_vrv_x_list02.jpg'>";
    }
}
