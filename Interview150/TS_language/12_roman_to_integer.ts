// const CheckString = (s : string , l : number) => {
	
// }


function romanToInt(s: string): number {
	let sum : number = 0 ;
	let l : number = s.length;
	for(let i : number = 0 ; i < l ; i++)
	{
		if(s[i] === "I" && s[i+1] === "V" )
		{
			sum+= 4;
			i++;
		}
		else if(s[i] ==="I" && s[i+1] === "X")
		{
			sum+=9;
			i++;
		}

		else if(s[i] === "X" && s[i+1] === "L")
		{
			sum+=40;
			i++;
		}
		else if(s[i] === "X" && s[i+1] === "C")
		{
			sum+=90;
			i++;
		}
		else if(s[i] === "C" && s[i+1] === "D")
		{
			sum+=400;
			i++;
		}
		else if(s[i] === "C" && s[i+1] === "M")
		{
			sum+=900;
			i++;
		}
		else if(s[i] === "I" )
			sum+=1;
		else if(s[i] === "V" )
			sum+=5
		else if(s[i] === "X" )
			sum+=10
		else if(s[i] === "L" )
			sum+=50
		else if(s[i] === "C" )
			sum+=100;
		else if(s[i] === "D" )
			sum+=500
		else if(s[i] === "M" )
			sum+=1000
	}

	return sum;
};


console.log(romanToInt("XXI"))

