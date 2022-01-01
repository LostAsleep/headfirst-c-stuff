package main

import "fmt"

func main() {
	counter := 0
	for counter < 1000000000 {
		counter++
	}
	fmt.Println("Loop ran", counter, "times.")
}
