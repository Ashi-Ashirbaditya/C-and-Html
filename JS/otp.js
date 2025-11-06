let otpgenerator= (digit)=>{
    let num='0123456789abcd'
    let otp=''
    for(let i=1;i<=digit;i++){
        otp+=num[Math.floor(Math.random()*2)]
    }
    return otp
}
console.log(otpgenerator(7))