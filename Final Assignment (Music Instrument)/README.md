## Final Assignment 

Self Playing Guitar

What I wanted to with this project was build a guitar that would be able to play itself. 

For this project I used: 

The guitar itself

2 servos;

2 motors;

1 button;

1 arduino;

1 motor shield;

A guitar slide;

2 belts.

## The Design

Using the scene shop I had to use wood in order to put the servos and motors on and I had to work around not actually mouutning something onto the guitar in order not to harm it. I uploaded a file in the pictures folder of where I got the idea of the design. The design relied on the fact that the wood applied enough pressure on the guitar so that it would not tilt or move and the piece of wood that held the two servos and motors was not directly placed onto the guitar, but there were two extra pieces of wood between the piece that held the motors and servos and the guitar. At the head of the guitar was a piece of metal that the two belts were attached two in order for the motors to move. The reason for using two motors was that there needed to be balance because the slide that was glued to the belt and was moving was too heavy to only be held from one side and so the two belts ensured that it wouldn't fall off and would go exactly to the fret I coded the arduino to go to. The slide was connected to the belt using a straw that had a piece of wood inside in order for it to be heavy enough to stick to the slide and also not fall off. The reason for also using a straw was that the slide was circular and so when I tried sticking objects that were rectangular, they wouldn't stick. After attaching the slide to the two belts, it became too light and at first was not pressing hard enough on the guitar strings for a percievable sound to be heard. Thats where rubber bands came in. Two rubber bands were attached together between the guitar in order for it be heavy enough for sound to be heard on each fret.

## The Mechanism 

The two Servos had picks attached to them, one played on the E string and the other played on the B string. The two motors used a belt and pulley mechanism where they would move in a direction that would allow the slide that was attached to the belt to move in the direction the code intended for them to move towards. By pushing a button, the guitar immediately starts playing the interstellar theme starting at the 5th fret and ending at the 5th fret in order to ensure that I would have to move the belt manually after each time it was played. The two servos and two motors were connected to the motor sheild and the button was soldered onto a prototyping sheild.

## Problems and Solutions

At first there was a problem that the code I used for the motors stopped the other motor from playing and there was no way to get the two motors to move together at the same time with the code I initally used. Then through reading the motorsheild instructions, I came across a code that would be able to make them both play at the same time. However that made me have to redo the whole code. I also attached the two motors looking in opposite directions which meant that I had use BACKWARDS for one and for FORWARD for one, for them to move in the same direction which was very tricky. Since the servos don't need to work when the motors are moving and should work when the slide is positioned to the specific fret, it was easy coding around that. In addition, once I gave the motor sheild 6V, the motors moved slower which was very weird so I had to feed the Arduino the regular 12V and the power from my laptop. Before the IM showcase, the guitar played perfectly and the sound was easily heard with the picks I used, however during the IM showcase the sound could not be heard so I used an amplifier to make the sound louder but the picks were too light for the amp to amplify the signal and increasing the master on the amp gave feedback. So I had to attach two new harder picks as fast as I could. Initially I only used one servo to play on the B string, but as the motors were too slow, the song was not heard and there was too much time for the slide to move from a fret to another fret on the same string. So I had to add another servo for the higher string E in order for the slide not to move too many frets along the guitar, but that meant that I had to change all the code and test out the intervals it needed to move in order to reach a fret from the fret it was placed in before. This meant that each interval wasn't fixed because sometimes it moves form example from E to B and then G to B which means that I had to test out each interval for each of these note changes. But since I had finished the design of the guitar, I had enough time to change the code a few times in order to get it running.




