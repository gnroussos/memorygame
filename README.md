# Memory Game
<p>
<img src ="https://img.shields.io/badge/platform-UWP|C++/CX-yellow.svg?style=plastic">
<a href="license" alt="license"> <img src="https://img.shields.io/badge/license-GPL_(>=3)-blue.svg?style=plastic"> </a>
<img src ="https://img.shields.io/badge/build-passed-green.svg?style=plastic">
</p>
A memory card game in C++/CX for Windows 10, which demonstrates features on the Universal Windows Platform (UWP)<br/>

<li>Desktop Windows (Win32) API consumed within Windows runtime (WinRT)</li>
<li>Fisher - Yates suffle algorithm</li>
<li>High resolution timer</li>
<li>XAML UI & element transitions</li>
<li>Command bars</li>
<li>Dialog boxes</li>
<li>Data binding</li>
<li>Storyboard animations</li>
<li>Animated elements</li>
<br/>
### Testing 

Running & testing Universal Windows apps, on a non development machine, is not a simple process (security issues & publishing in Store).<br/>
However, inside `\install` folder, a package of the game has been included, to install & run (under certain conditions) on a local pc running **Windows 10**, without compiling the source (Visual Studio).

### Installation

Unzip the `secretzoo.zip` file in a folder.
Within the created folder (`MemoryGame_1.3.4.0_Win32_Test`), right click on the `MemoryGame_1.3.4.0_Win32.cer` file & choose **Install Certificate**.
<br/>
In the Certificate Import wizard, choose **Local Machine** & press <kbd>Next</kbd>.</br>
Check "**Place all certificates in the following store**" option & click <kbd>Browse</kbd>.<br/>
Scroll down & select "**Trusted People**" store, then click <kbd>Next</kbd>.<br/>
Click <kbd>Finish</kbd>.

Then, right click `Add-AppDevPackage.ps1` file & choose **Run with PowerShell**.<br/>
This will bring up a command window, which will deploy the app on the pc.
Follow the instruction on the screen, if any, and the app should be installed.<br/><br/>


> ###### Note
In order to run the app it's *necessary* the certification file to be installed on a machine running *Windows 10* (develop mode). Later, if not needed anymore, the certification file should be manually removed.
