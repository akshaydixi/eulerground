;largest palindrome from product of 2 3-digit numbers
(defn palin [x] 
    (=  (apply list (str x))(reverse (str x)))
)
;(prn (palin 123)) == false

;(prn (palin 121)) == true
(def x (vector))
(doseq [i (range 999 100 -1)]
	(doseq [j (range 999 100 -1)]
		(if (palin (* i j))
			(def x (conj x (* i j)))
			)
		)
	)
(prn (first x))
