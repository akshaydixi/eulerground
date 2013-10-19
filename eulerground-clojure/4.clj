;find the largest prime factor of a composite number
(defn isprime [n] 
		(if (== 2 n) true
		(let [limit (Math/sqrt n)]
				(if (zero? (rem n 2)) false 
				(loop [i 3]
					(if (<= i limit)
						(if (zero? (rem n i)) false (recur (+ i 2)) )
						true
						)
					)
				)
			)
		)
	)

(defn divisors [n]
	(let [divs []]
		(loop [i 2 divs [1,n]]
			(if (zero? (rem n i))
				(do (recur (+ i 1) (conj divs i)))
				(if (<= i (/ n 2))
					(recur (+ 1 i) divs)
					(reverse divs)
					)
				)
			)
		)
	)

(def number 600951475143)
(println (divisors number))
(println (first (filter isprime (divisors number))))

	