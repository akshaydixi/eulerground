;find sum of all even fibonacci terms below 4 million
;
;
;
(def PHI (/ (+ 1 (Math/pow 5 0.5)) 2) )
(def SHI (/ (- 1 (Math/pow 5 0.5)) 2) )

(defn fib [x] 
    (int ( / ( - ( Math/pow PHI x ) ( Math/pow SHI x ) ) (Math/pow 5 0.5) ))
)

(def fibs (loop [v (vector),
                i 2,
                elem (fib 1)]

                (if (< elem 4000000)
                    (recur (conj v elem)
                           (inc i)
                           (fib i)
                    )
                    
                    (apply vector v)
 
                )
        )
)


                    
(println (reduce + ( filter (fn [x] (= 0 (mod x 2))) fibs ) ) )
