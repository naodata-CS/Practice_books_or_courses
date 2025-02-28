Selector {
	Property: Value; <- Declaration style
}

We can write internal, external
Always use external CSS like style.css and classes for targets

1. RGB / RGBA NOTATION (255, 255, 255, 0.3) -> Red, Green, Blue, Transparency
2. HEXADECIMAL NOTATION -> Scale from 0 to ff (255 in hexadecimal number) #00ffff / Shorthand, when all colors have identical pairs.
3. Only use RGBA when we need transparency

### Pseudo-Classes

li:last-child {

font-style: italic;

}

  

li:nth-child(even) {

color: red;

}

### Conflicting selectors and declarations

There are multiple selectors selecting the same element. Which one of them applies?

All of them. All rules and properties are applied!
But there are conflicting font-sizer declarations -> Lets see how it works
1. Highest priority -> Declarations marked !important
2. Inline Style (Style attribute in HTML)
3. ID (#) Selector / Last selector in code applies
4. Class (.) or pseudo-class (:) selector -> . or : selector
5. Element selector (p, div, li, etc.)
6. Universal selector ( * )

Last selector in code applies

Inheritance -> If don't have more specific style applied the Class inheritance must be applied like if you write body color red and in rest of your code you don't put another color or class all your p tags must be red.

### THE CSS BOX MODEL

Content: text, images, etc. (width, height)
Border: A line around the element, still inside of the element
Padding: Invisible space around the content, inside of the element
Margin: Space outside of the element, between elements
Fill area: Area that gets filled with background color or background image]


