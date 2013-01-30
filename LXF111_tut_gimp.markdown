Tutorial Gimp Open source image-editing
Gimp
software you can get your teeth into
Gimp: Know your
Everyone knows selections, right? But how well do you really know them?
This month, Michael J Hammel gets tricky with some awkward images.
You can drag the hotspots to edit the selection while the
bounding box is displayed.
I
Our
expert
Michael J
Hammel is a
contributor to the
Gimp project and
the author of three
books on the
subject, including
his latest, The
Artist’s Guide to
Gimp Effects.
f masks are the heart of image compositing, selections are the
blood that gives them life. Compositing, for those who don’t
know, is simply the process of merging two images. Without
masks, compositing would be nothing more than a child’s photo
collage, created just as you might cut photos from magazines or a
newspaper. But masks let you do more than lay one image on top
of another. Masks, and their companion, Layers, let you blend the
edges of each image with the one below into a seamless collection
that is more than the sum of its parts.
There are many ways to create masks, and nearly all of them
start with a good selection. The trick to making selections into
useful masks is a fine art of combining selections. By working with
multiple selections we can outline nearly any shape we require,
from boxes to fur.
In this tutorial I’ll start with a review of selection basics and
then move on to finer-grain techniques for more difficult
productions. I’ll also cover methods of improving the selection so
that a mask or layer can more seamlessly blend into another layer.
The basic selection tools were given an overhaul in Gimp 2.4 and
now offer more user-friendly interfaces. Both the Rectangle and
Ellipse selection tools outline a selection with a bounding box that
includes hotspots for interactive editing of the selection. Move the
mouse around the bounding box – left, right, top, bottom and the
corners – to view the hotspots. At the same time, note the
changes to the cursor that display which direction you can drag to
modify the selection.
The selection is active while the bounding box is in place. You
can, for example, drag and drop the colour boxes from the Toolbox
into the selection to fill it even while the selection bounding box is
displayed. However, you may also want to complete the selection
edits by clicking inside the selection’s dotted outline or hitting the
Enter key. Completing the selection prevents further editing of the
selection by removing the bounding box. Editing of the rectangular
and elliptical selections is limited to height and width when using
the bounding box hot spots.
Boxes on the corner
Fortunately, more editing is possible with the latest version of
Gimp. Added to the 2.4 release is the ability to transform your
selection after it is completed. The transform tools in the Toolbox
(Rotate, Scale, Shear, Perspective and Flip) all support transforms
on either the current layer, the active selection boundary or paths.
This means you can create a selection with the Free Select (lasso)
tool and add perspective to the selection using the Perspective
tool. But be careful here. The transform tools must be configured
to operate on the selection by clicking the selection button in the
Tool Options dialog.
The transform buttons, which appear in the Tool Options dialog
for all the transform tools, apply the transform against the image
(first button), the current selection (second button) or the
currently active path (third button). Be sure to set this option
before applying a transform.
Last month We made words and pictures go together like a horse and carriage.
88 Linux Format November 2008
LXF111.tut_gimp Sec2:88
29/8/08 17:21:24
Gimp Tutorial
selections
sky. Now invert the selection (Select > Invert) to select the flowers.
Because of the differences in hue the selection is extremely
accurate with this particular image.
Sometimes the edge between the subject and the background
is obvious. In cases like this the Scissors tool can be used to
outline the subject with a series of anchors just as you would
create a path. This process takes a little more work but can outline
an object in great detail and, more importantly, allows you to
moving the anchors and edit the outline before converting the
path into a selection.
Clever scissors
Combining a colour-based selection with a free hand
selection doesn’t require any precision work to create.
In this example above (the sunflowers) I want to select the
flowers alone. Normally I might use Select By Colour to select the
sky and then invert the selection. But the sky is filled with faint
clouds that blend with the flowers in the bottom-right of the
image. Fortunately, I can start with the flowers instead.
With the Select By Colour tool chosen from the Toolbox, I set
the ‘Select By’ menu entry to ‘Hue’ and click on just about any
yellow part of the flowers (no dragging required – just a click). This
selects the outline of the flowers but leaves some of the seeds
unselected. Since the outline of the flower provides a bounding
area for selection, all that’s required to add a Free Select to it.
Leaving the current selection intact, I choose the Free Select
tool from the Toolbox. I make sure the Add Mode is active in the
Tool Options dialog (second from left in the Mode row) and I then
draw a freehand selection around the seeds of the flower, dragging
the mouse outside of the canvas where necessary.
The Scissors tool works by searching for an edge near where you
click. The anchor is placed on that edge and a curve drawn
between the new anchor and the previous anchor. Once you’ve
outlined the subject you click inside the path you’ve created to
convert it to a selection. Alternatively, you can use paths to create
a similar selection. The advantage to a path is that it lives in its
own dialog (like the Layers dialog) so you can edit the path later to
modify your selection.
Although it’s displayed there, a path doesn’t exist in the canvas
– the path lives only in the Paths dialog. In order to have it show up
in the canvas you need to either stroke it (to draw in the current
layer of the image) or convert it to a selection. Both options are
available as buttons in the Tool Options dialog for the Paths tool.
The newest addition to Gimp’s selection collection is the
Foreground Select tool. This tool has built-in intelligence, like the
Scissors, but is easier to use. When chosen from the Toolbox, the
Foreground Select tool turns the cursor into a lasso. Use this to
draw a rough outline around the subject. In the example above-
right I drew a line around the building, dragging outside the
Subject isolation
The whole point of a selection is to pull an object from an image.
How you do this depends a great deal on the original image.
Cluttered backgrounds make the process more difficult, but not
impossible. The trick with this type of image is to use more
sophisticated tools and methods. The Fuzzy Select tool,
sometimes referred to as the magic wand, works much like the
Select By Colour tool, but is even better with images with solid or
nearly solid coloured backdrops. In fact, as easy as it was to select
the flowers with Select By Colour, Fuzzy Select can select the
flowers with one single drag.
Choose the Fuzzy Select tool from the Toolbox, then click and
drag slowly through the sky in the image (the sky, not the
flowers!). As you drag, the selection grows until it selects the entire
Setting the Select By menu to Hue for Fuzzy Select enables the tool to detect the
differences in hues of the sky and flowers.
If you missed last issue Call 0870 837 4773 or +44 1858 438795.
November 2008 Linux Format 89
LXF111.tut_gimp Sec2:89
29/8/08 17:21:29
Tutorial Gimp
canvas on the left and re-entering on the right. The outline is
roughly oval and includes some of the background.
Once the lasso selection is completed, Foreground Select tints
the non-selected background blue. After the lasso operation is
complete the cursor turns into a paintbrush with a circular tip. You
can increase the size of the tip in the Tool Options (a necessary
step if you’re working on a very large image, since the default size
of the brush is best suited to web-sized images as opposed to
print-sized images). Now click over the foreground subject and
drag the mouse to draw a line through the foreground object. The
line should cover a set of pixels that make a good representation of
the colours in the foreground object. Once you release the mouse
button, the Foreground Select tool begins to compute the outline
of the foreground object. To complete the selection, hit the Enter
key and you’ll see the line of marching ants around the selection.
The usefulness of Foreground Select is in the ease with which
the user can make the selection – a rough outline and a brush
stroke are about all you need. The drawback with Foreground
Select is that the responsiveness of the brush during the stroke is
slow when the brush tip is large. Despite this, Foreground Select
can create extremely accurate selections with little user effort.
Alternative methods
The curve
between anchors
is jagged when you
use the scissors
tool, so it’s better
to use a path with
this selection
Complex selections nearly always involve hair, fur or any other
sort of very thin lines. Even the most advanced selection tools by
themselves cannot make these selections. What you need is to
combine tools or use specialised masking techniques that don’t
involve the selection tools at all.
Let’s try Foreground Select on a more complex image – a set
of tennis balls sitting on the strings of a tennis racket (below right).
The image is more complex because the tennis balls are not
touching – their pixels cannot be selected contiguously as was
done in the previous example. Worse, the edge of the racket is also
yellow. Fortunately, we can use multiple tools to isolate the tennis
balls. First, I outline the tennis balls using the Foreground Select
lasso operation, doing my best to include as little of the racket as
possible. Then I draw my foreground selection line through all
three tennis balls. This does a good job of selecting the tennis balls
only, but it also picks up some of the racket strings while leaving
out some of the text stamped on the nearest ball.
Now I turn off the Contiguous button in the Tool Options. Then
I draw a few more foreground selection lines in various parts of the
balls, like the dark text. This refines the Foreground Selection a bit
but there is plenty of work left to do.
The lasso selection just provides an initial selection that the
remaining steps of Foreground Select will improve upon.
Next I switch to Select Background and draw along the edges
of the balls over the racket strings. I zoom in on this area first to
get a better look at the area. Zooming in will not alter the size of
the brush tip so a small brush tip works well for detailed work like
this. I zoom out and hit Enter to covert this into a selection. Here I
can see how poor the selection really is. The only choice I have is
to clean it up with the Quick Mask.
The Quick Mask works very much like Foreground Select.
When you enable it (the Quick Mask button is the square button in
the lower-left of the image window) everything outside of the
selection is tinted red. Red is the default colour – right click on the
Quick Mask button to change to a different colour, though the Red
tint shows up well while working with the yellow tennis balls.
Next you select a paint tool from the Toolbox. The Paintbrush is
ideal for this along with using a soft-edged brush such as one of
the Circle Fuzzy brushes that are part of the default Gimp
installation. Soft-edged brushes in the Quick Mask work like
feathering of a selection, though if you choose to use a hard edged
brush you can always feather the resulting selection later (using
Select > Feather).
Now we simply paint over the balls with white to add them to
the selection. When using Quick Mask, white paint will cause the
mask to be removed (you don’t actually see the white paint) while
black paint will add to the mask (you see the mask tint added to
where you paint). I paint out the basic ball outlines with white paint
and then switch to black paint to remove areas I don’t want
Quick Mask lets you paint the areas to be selected (or not
selected). Soft edged brushes will make the selection feathered.
90 Linux Format November 2008
LXF111.tut_gimp Sec2:90
29/8/08 17:21:30
Gimp Tutorial
The green channel was selected for this image, though in this
case the red channel might work just as well.
included in the selection. With Quick Mask it’s possible to zoom in
on the image, use a very small brush, and manually select the fine
fur or hair in an image. This is a very labour-intensive process,
however, and except for high-end image productions you probably
won’t need to do it – it’s just nice to know you can. Once I’ve
finished painting in the Quick Mask I click on the Quick Mask
button again to switch back to a real selection.
Corner cases
Finally, we have to consider those images that simply don’t
cooperate with the basic selection tools. In these cases, the image
needs to be manipulated manually. Take, for example, the
scholarly-looking canine above. A few passes with Foreground
Select shows that this tool simply won’t work without heavy
editing. Because of the computational time required with each
new drag to add to the foreground object the process becomes
overly time consuming with extensive tweaking.
An easier solution is to find a channel that provides the
greatest contrast and use it as the starting point for creating a
mask. Open the channels dialog and turn off all the channels by
clicking on their visibility icon, then turn them back on to find the
one that has the greatest contrast. For this image, that would be
the green channel. Right-click on that channel and select
Duplicate Channel. A duplicate of this channel is added to the
bottom of the list. Click on the visibility icon (the eyeball to the left
of the thumbnail) to turn the duplicate channel visibility on.
We’re going to use this duplicate channel to create a layer
mask to isolate our friendly mutt. In the layers dialog, turn off the
visibility of the background (and only) layer. Now you can see the
channel itself, which looks a lot like a desaturated version of the
dog layer. Make sure the channel is active by clicking on it in the
Channels dialog then open the Levels dialog. Adjust the sliders
until you’ve gotten the best outline of the dog – don’t worry about
the inside of the dog, as we’ll add that later.
We don’t want the extra cruft around the edges, so we can
paint those white directly in the channel. But we don’t have an
exact outline of the dog yet, so we can’t fill the inside with black
yet. The way to handle this is to copy the channel (Select > All, Edit
> Copy), return to the Layers dialog and click on the background
layer to make it active, then paste into the image window (Edit >
Paste). Anchor this selection in the Layers dialog (Layer > New).
Now we can edit this new layer by reducing its opacity (move
the Opacity slider to 25.0 in the Layers dialog) and carefully draw
a black line along the edges of the dog where no black in the new
layer currently exists. I zoomed in here to see the edge more
cleanly and use a very small brush with a hard edge and the Pencil
tool. Once the outline is closed, we can select most of the white
area with the Fuzzy Select tool, grow the selection a few pixels and
fill it with black. Then we clean up the rest of the image manually
with the paintbrush.
With the outline of the dog filled with black in the new layer we
can copy it into a layer mask of the original layer. Click on the dog
layer to make it active and then add a layer mask to it (Layer >
Mask > Add Layer Mask). Click on the new layer with the black
outline of the dog in the Layers dialog to make it the active layer.
Copy it (Edit > Copy), then click on the dog layer’s mask – make
sure to click on the mask itself in the Layers dialog! Paste the copy
into the mask (Layer > Paste) and anchor it (Layer > Anchor).
Black represents transparent in a mask, so invert the colours
(Colours > Invert) in the mask. A light blur should be applied to the
mask at this point as well (Filters > Blur > Gaussian Blur, about five
pixels). Now you should have a good outline of the dog. I’ve added
a green background just so I can see the results. To create a
selection from this, just convert the mask to a selection (Layer >
Mask > Mask to Selection).
It’s all about choice
Which tools and techniques you use depends a lot of the source
image. High-contrast images work well with the basic tools. Large
differences in hue between the background and foreground object
work well with Fuzzy Select, Select By Colour and Foreground
Select. Objects that blend into the background, have lots of fine
lines along the edges and/or sit in front of busy, multicoloured
backgrounds require much more work using multiple tools,
adjustments to the Levels and Brightness/Contrast tweaks to
create a suitable mask.
In the end, what works best is a lot of trial and error. If there
were a magic bullet for all selections, Gimp would have it.
Fortunately, we have a plethora of tools in the Gimp toolchest to
make our selection experiments quick and painless. LXF
It takes more
effort to get this
selection, but the
results are worth it.
Brush tips
The stock brushes in Gimp are fairly static
in size. You can duplicate them to edit the
size and shapes, but I find it easiest to
create a new brush that I edit manually
repeatedly for whatever process I’m
working on. See the New Brush button
in the Brushes dialog button bar to create
a new brush.
Next month We’ll see how to get your work out of Gimp and on to paper.
November 2008 Linux Format 91
LXF111.tut_gimp Sec2:91
29/8/08 17:21:33

