
let rec converti base n = match n with
|n when n<base -> [n]
|_-> (n mod base)::(converti base (n/base));;
open List;;
let base_2 x = rev(converti 2 x);;

let n = ref 1 in
let m = ref 2 in
while !m > 0 do
n := !m;
m := 2 * !n;
done;
!n;;

let mot1 = "1010000000001010010000100101";;
let rec l1 s = if s = "" then [] else
(int_of_char(s.[0])-48) :: (l1 (String.sub s 1 ((String.length s) - 1)));;
let l11 = l1 mot1;;

let rec trouve l (n,a,b) = 
match l,n with
	|[],_ -> (n,a,b)
	|(0::c),0 -> trouve c (0,a+b,b)
	|(1::c),0 -> trouve c (1,a,b)
	|(0::c),n -> trouve c (0,a,b+n)
	|(1::c),n -> trouve c (n+1,a,b);;

let fonc l = 
let (x,y,z) = trouve l (0,1,0) in y+z;;

let fonc2 x = fonc (base_2 x);;

let fonc3 x = trouve (base_2 x) (0,1,0);;

(*---------------*)

let paa n =
let r = ref 1 in
while 2* !r <= n do
r := 2* !r;
done;
!r;;

let pbb n =
3*(paa n/2)-2 >= n;;

let rec f n i = match n,i with
|n,i when n<0 -> 0
|0,_ -> 1
|_,0 -> 0
|1,_ -> 1
|n,i when i> paa n -> f n (paa(n))
|n,i when 4*i - 2 < n -> 0
|n,i ->
f (n-2*i) (i/2) +
f (n-i) (i/2) +
f (n-i) (i/4) +
f (n-i/2) (i/4);;

let g n = f n (paa n);;

if n<0 then 0 else
if n=0 || n=1 then 1 else
2*f(n - paa n) +
f(n - (paa n)/2);;