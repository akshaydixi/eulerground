;find sum of all even fibonacci terms below 4 million
;
;
;
(def PHI (/ (+ 1 (Math/pow 5 0.5)) 2) )
(def SHI (/ (- 1 (Math/pow 5 0.5)) 2) )

(defn fib [x] 
    ( / ( - ( Math/pow PHI x ) ( Math/pow SHI x ) ) (Math/pow 5 0.5) )
)

(

