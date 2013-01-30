Tutorial Gimp Open source image-editing
Gimp
software you can get your teeth into
Gimp: Enhance
Gimp contains a little-known back door to some powerful layout and preset 
features. Michael J Hammel picks the lock and roots through the stock.
Map keyboard and mouse buttons to Gimp events using
the Preferences > Input Devices > Input Controllers dialog.
G
Our
expert
Michael J
Hammel
is a contributor to
the Gimp project
and the author of
three books on the
subject, including
his latest, The
Artist’s Guide to
Gimp Effects.
imp has many features that are seldom explored
by the new or even experienced user. Most users
are aware that in version 2.6 the menu bar in the
Toolbox has been replaced by an eyeball-shot of Wilbur, the
Gimp mascot. However, few realise that you can get rid of
those probing eyes by adding the following line to the
~/.Gimp-2.6/Gimprc file:
(toolbox-wilber no)
Another hidden feature lets you connect your mouse
wheel to certain events, such as scaling the current brush
size. This makes working with brushes a pleasant experience
when you work with various sizes of image windows.
Two areas of concern to new Gimp users, whether at
home hobbyists or experienced artists, are the default
window layout and the difficulty encountered trying to
configure Gimp’s tools. Few users are aware that you can hide
all windows except the image window by simply hitting the
Tab key (hitting it again brings the windows back). But this
only hides the windows and doesn’t actually change their
layout on the screen.
Both of these problem areas can be addressed with
hidden features in Gimp. And that’s exactly what Gimp Paint
Shop is all about. New users of Gimp are sometimes put off
by Gimp’s multiple windows and the positions they take
within a desktop layout. Often this happens when the user is
migrating from Windows or Photoshop where MDI (multiple
document interface) causes all windows of an application to
live within a single parent window. With Gimp, the layout uses
SDI (single document interface) where each window of a
single application is independent of other windows in the
same application.
New users, especially experienced designers and artists,
also run into difficulty when setting up Gimp’s tool to perform
various tasks. It can be confusing, for example, to know which
brush to use with the Paintbrush versus which to use with the
Eraser, not to mention how you might configure the Tool
Options for each. Having each tool use a different brush and
configuration can make things even more perplexing.
This is the original
window layout for
Gimp, without the
GPS updates.
Last month We showed how to create an iPod advertisement using Gimp.
82     LXF119 June 2009
LXF119.tut_gimp 82
www.linuxformat.com
8/4/09 3:49:3 pm
Gimp Tutorial
the interface
Ramón Miranda ran into these very issues and decided to
do something about it. Starting with Gimp’s built-in tool
presets and with a little help from the Gimp community,
Ramón was able to configure Gimp to ease the confusion for
new users. The result of his work is what he calls Gimp Paint
Shop, or GPS.
GPS is a collection of data files and Gimp configuration
files that, once installed, ease experienced artists into the
Gimp world. While many users and developers continue the
long debate about which is better, MDI or SDI, Ramon
decided to create a layout for Gimp’s windows that simulates
the former yet works within the rules of the latter, while at the
same time adding configurations that ease the use of Gimp
for many common drawing and painting tasks.
Of course, GPS isn’t for everyone. For a start, it requires a
large display, typically 1280x960 or better, although you can
alter this with your window layout. Secondly, its primary use is
for artists who focus on using Gimp for drawing and painting
exclusively, not for photo enhancement. The configurations
installed with GPS are mainly for people who already know
how to draw but are not yet familiar with using Gimp.
Package contents
GPS was originally packaged in a RAR file, then later
repackaged into a 7zip
archive. Neither are common
Linux archive formats, so I’ve
repackaged GPS again as a
typical tar.gz file that you can
snag from my website (see
below) or from the LXFDVD.
The package contains the following directories:
brushes A collection of brushes.
palettes A collection of colour palettes.
tool-options A collection of tool presets.
It also contains two files used to configure Gimp:
sessionrc Initialises the window layout for Gimp.
toolrc Adds two commonly used tools to the Toolbox.
The GPS window layout for Gimp – an ideal base of operations for artists who
focus on drawing and painting, but who aren’t yet familiar with the program.
Most Gimp users know about brushes and where to find
them. What they don’t know is that various brushes are best
used with specific tools. The complete collection of brushes in
GPS is actually multiple smaller collections of brushes, each
designed for use with different drawing and painting tools
found in the Gimp toolbox.
Instead of choosing the brush
and then the tool from the
Toolbox, just choose the tool
and then select one of the GPS
tool presets. More on using tool
presets in a
moment. Let’s finish the installation first.
Download the archive of choice and
unpack it into any directory. To utilise the
window layout changes and tool presets,
Gimp needs to be restarted. If Gimp is
currently running, exit out of it. The installation
process is manual – you’ll be copying from a
command line. The easiest way to install these
files is to copy them all at once to your Gimp
directory. In the following example, the tar.gz
version of the archive is used.
% tar xvzf gps_v1.0.tar.gz
% cd gps_v1.0
% cp -r * ~/.Gimp-2.6/
“GPS is for artists who
focus on using Gimp for
drawing and painting”
GPS archive and docs
The original documentation was written in Spanish and 
provided in PDF format. This was later translated to English 
and placed on a web page. I copied this and merged it with 
the original images from the Spanish PDF to produce an 
edited English language version of the PDF. 
The document, like GPS itself, is GPL licensed, and I’ve 
also made available the OpenOffice.org version I created to 
generate the PDF:
 www.graphics-muse.org/source/GPS.odt
 www.graphics-muse.org/source/GPS.pdf
 www.graphics-muse.org/source/gps_v1.0.tar.gz.
Gimp Paint Shop
The GPS
presets for the
Paintbrush tool.
Gimp window layout
The installation of GPS is copied in a new
sessionrc file. This file is read by Gimp at
startup to place Gimp’s various windows in the
same position on the desktop as the last time
Gimp was run. The file is rewritten when Gimp
exits. By copying in the GPS version of the
If you missed last issue Call 0870 837 4773 or +44 1858 438795.
www.tuxradar.com
LXF119.tut_gimp 83
June 2009 LXF119     83
8/4/09 3:49:4 pm
Tutorial Gimp
layers, channels, paths, undo, selection and histogram. This
dock is a bit crowded but it does provide quick and ready
access to features without having to use menus.
At the bottom of the right-hand side docks is a dock with
windows related to brushes, gradients and patterns. This
grouping is consistent with the grouping of windows for
managing the foreground and background colours. The
layout is very intuitive.
With this updated layout users will no longer have to scan
the Windows menu or look for windows hidden under other
windows (as is often the case using SDI and Linux window
managers). Now, all the windows are opened immediately
when Gimp starts and are stored in docks where they can be
easily located.
Using tool presets
GPS provides ways of quickly setting the foreground and background colours
by using multiple related windows in a single dock.
sessionrc file the window positions are re-initialised to the
preferred GPS layout. Any changes that are made during the
Gimp session will be saved to the sessionrc file.
The GPS layout makes a number of changes to Gimp’s
default window layout. First, it opens nearly all the available
windows into a set of five docks. It then places two of these
docks beneath the Gimp Toolbox on the left-hand side of the
display. The other three docks are added as a set of
connected docks on the right side of the display.
Finally, a blank image window is opened by default. The
blank window is new in Gimp 2.6. It’s actually a placeholder
for the first image window you create or open (File > New, for
example), so it can be easily adjusted. For some users this
gives the impression of the familiar MDI interface provided by
Photoshop. For old timers like me, however, it just takes up a
lot of screen space. For artists it doesn’t matter much, since
they’re likely to be using a lot of that empty space while
editing their artwork.
Experiment with this layout by making changes to the
docks, window sizes and positions. If the changes aren’t
suitable, just exit Gimp and copy in the original GPS
sessionrc file, then restart Gimp.
Ramón took special care in selecting which dock to add a
window. For example, the Tool Options is in a dock by itself
and is directly beneath the Toolbox – right where you’d expect
to find it. Beneath this dock is another dock with tools for
setting the foreground and background colours.
On the right side of the display, the top dock has the
Navigation window. Many users are familiar with the Quick
Navigation button on the lower-right of the image window.
However, this feature also has its own window. Ramón placed
this window at the top of the toolbar, making it easy to scan
an image and position it using a visible window instead of a
pop up feature. Below the Navigation window is a dock with
most of the rest of the windows an artist will need, including
The next big improvement brought by GPS is the tool presets.
Most users probably aren’t familiar with these. A preset is
simply the Tool Options for a particular tool saved to a file. For
example, when you choose the Text tool from the Toolbox you
usually have to use the Tool Options to update the Font, Size
and Hinting settings for a particular text format. The Tool
Options dialog has a save feature so these settings can be
named and saved to a file. Later, you can use another Tool
Options feature to load those settings by simply selecting the
named preset. GPS provides one or more presets for the
following tools:
Airbrush.
Bucket Fill.
Clone.
Eraser.
Ink.
Paintbrush.
Rectangle Select.
Smudge.
It also has presets for a Mix Brush tool. This tool is only
available, however, if your version of Gimp has the Gimp
Painter patch applied. Most users won’t have this and they
won’t be able to install it unless they’re familiar with building
Gimp from source code.
Take a look at the Tool Options window by choosing the
Paintbrush tool. The Tool Options is the box directly below the
With GPS, it’s not just a paintbrush, but a collection of
paint and drawing tools rolled into one. Further, each Gimp
tool becomes a collection of tools using GPS presets!
Never miss another issue Subscribe to the #1 source for Linux on p102.
84     LXF119 June 2009
LXF119.tut_gimp 84
www.linuxformat.com
8/4/09 3:49:4 pm
Gimp Tutorial
Toolbox. At the bottom of this window are a set of four buttons.
These buttons are used for managing presets for the currently
selected tool. These buttons are, from left to right: save, load,
delete and reset.
When you make changes to the Tool Options dialog you
can save those changes to a named preset. Just click on the
save button. This will present a list of existing named presets.
Choosing one of the named presets will overwrite its saved
settings with the settings from the Tool Options window.
Alternatively, the New Entry menu option can be used to
create a new named preset. Be careful saving to an existing
named preset as there is no undo operation to return to the
previous saved settings.
Once a preset has been saved, it can be loaded using the
load button. This button also provides a menu of named
presets from which to choose. Selecting one of these will
update the Tool Options window with the saved configuration.
The delete button should be used with tender care. It will
remove all named presets. If this happens accidentally, just
reinstall the GPS package. If you’re paranoid about losing
presets you should consider setting up a Cron job to back up
your presets periodically. The last button in the Tool Options
window, reset, is used to
return the Tool Options
settings to their default state.
Resetting the Tool Options
window will not affect any of
your saved presets.
Gimp Painter
This patch creates a new tool for blending colours on the
image window. The patch was created by a Japanese
developer and can be found on SourceForge. There’s also  
a brief discussion on how to apply the patch and build
Gimp on Blogspot. 
Gimp Painter can be found at http://sourceforge.jp/
projects/Gimp-painter.  
For the discussion, visit http://klettersblog.blogspot.
com/2008/10/Gimp-painter.html.
I’d love to provide more advanced examples of this
wonderful package, but alas, while I understand Gimp fully I’m
far from an accomplished artist.
Summary
GPS is a relatively simple extension to Gimp considering it
has no additional code and offers no additional plugins.
Instead, it’s completely based on less well known and much
less discussed features of
Gimp – presets and docks –
that make it a powerful image
editing tool. A little
experimentation with GPS
shows that this package is
ideal for users with drawing
tablets. This is because the stylus of the drawing tablet can
now take on the characteristics of real world drawing tools
instead of just being a different kind of input device. Most of
the presets include settings for brush dynamics such as
Pressure, Velocity, Hardness and Size. All of these are
meaningful specifically to tablet users.
But don’t think that GPS is just for experienced users
with tablets. Quite the contrary. The GPS window layout and
predefined Tool Options make Gimp behave much more like
real world drawing and paint tools. And that in itself will make
Gimp more inviting to new users. LXF
“A little experimentation
shows GPS is the ideal
tool for tablet users”
Quick colour changes
Before getting into what you can actually do with this package
there is one additional feature to examine. GPS provides a
collection of colour palettes. These contain colours that many
artists would find useful, including human skin and hair, jeans,
grass, water and flowers.
Using the palettes effectively requires using the GPS
sessionrc configuration. This places the colour palette
windows in a dock at the bottom of the Toolbox window. There
are multiple windows here available in four tabs. To use the
GPS palettes, choose a palette from the third tab then select
the colour to use from the second tab. The second tab can be
used to set either the foreground or background colours using
the selected colour palette.
The natural
tool presets
available for
use in Gimp.
Touring the GPS presets
So what can GPS do for the artist? Examining the PDF
documentation will give you some clue here. Ramón provides
an excellent comparison of the various tools performing the
same functions (drawing lines and a small ball). Some of those
examples are included here.
Dabbling with the many presets, it becomes quickly
apparent just how powerful this package is for configuring
Gimp to behave like specific real-world tools, such as a
graphite pencil or a BIC pen.
The lines shown here were drawn after choosing the
named preset. The differences are distinct and very much
simulate the real artist tool for which the preset is named. The
only configuration required to achieve this was the selection of
a GPS preset – no fumbling around for the right brush,
configuring its spacing, or updating the Tool Options for the
Paintbrush tool. One click for the load button and one click to
choose the preset is all it takes.
Next month We channel the spirit of Godzilla and smash up some buildings!
www.tuxradar.com
LXF119.tut_gimp 85
June 2009 LXF119     85
8/4/09 3:49:5 pm

