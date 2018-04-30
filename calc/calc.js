function tbox1(){      
      var str=document.js.txtb.value;
      ans = eval(str);
      if( !isNaN(ans) ){
      document.js.ans.value=ans;
      }else{
      document.js.txtb.value="";
      alert("数式を入力してください!");
      }
      }

      function clr(){
      document.js.txtb.value="";
      document.js.ans.value="";
      }
