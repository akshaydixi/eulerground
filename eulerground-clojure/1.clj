;find multiples of 3 or 5 below 1000
;
;
;


(def x (list))
(dotimes [i 1000]
    (if (or
            (= 0 (mod i 5))
            (= 0 (mod i 3))
        )                   ;condition

        ( def x ( conj x i)) ; then 
    )
)
(println (reduce + x))

