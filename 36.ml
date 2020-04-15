
let rec converti base n = match n with
|n when n<base -> [n]
|_-> (n mod base)::(converti base (n/base));;

let palindrome = fun x -> rev x = x;;

let s = ref 0 in
for i = 1 to 1000000 do
if (palindrome (converti 2 i)) && (palindrome (converti 10 i)) then 
	begin 
	s := !s + i; 
	print_int i;
	print_string " \n";
	end
done;
s;;