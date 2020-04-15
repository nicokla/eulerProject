
let k = ref 1;;
let l = ref [];;

let frac_cont a =
k := int_of_float(floor a);
l:=[];
let aa = ref a in
let b = ref (int_of_float(floor !aa)) in
while !b != 2 * !k do
aa := 1./.(!aa -. float_of_int(!b));
b := int_of_float(floor !aa);
l := !b::!l;
done;;

l:=[];
let s = ref 0 in
for i = 2 to 13 do
let ii = (float_of_int i) in
if abs_float( sqrt ii *. sqrt ii -. ii ) < 0.001 then
frac_cont (sqrt(float_of_int i));
if (List.length !l) mod 2 = 1 then s := !s + 1;
done;;