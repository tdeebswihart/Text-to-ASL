## What is this?
This is a proof-of-concept Mac application to translate from english text to the equivalent ASL signs;

## How do I use it?
Text can be typed into the input, or text can be selected anywhere else and the current hotkey (CTRL-F1) pressed. The application will pull up the translation if available (te database is a little small right now) or send out a notification if one can't be found.


Installation requires the use of [CocoaPods](http://cocoapods.org) for the AFNetworking library (which could probably be replaced with basic NSUrlETC stuff frankly)

## Todo
- implement global context menu option (right-click -> "Translate text to ASL")
