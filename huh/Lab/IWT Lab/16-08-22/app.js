// // const text = document.getElementById('name');

// // text.addEventListener('change',(e)=>{
// //   console.log(e.target.value);
// // })

// const program = document.querySelectorAll("input[name=programs]");
// console.log(program);


// function programHandler (e){
//   console.log("checked");
//   if(e.target.checked){
//     console.log(e.target.value);
//     console.log(e.target.required);
//   }
// }

// program.forEach((pro)=>{
//   pro.addEventListener('change',
//   programHandler)
// });


const divisions = document.querySelector('select');

console.log(divisions);

divisions.addEventListener('change',(e)=>{
  
    console.log(e.target.value);

});