# react-native-native-sounds
# react-native-a-sounds
A very lite module to play system sounds and beep for react-native apps (no sound files)


## Install
using npm:
```js
npm i "@SohaibKtb/react-native-native-sounds"
```
or using yarn
```js
yarn add "@SohaibKtb/react-native-native-sounds"
```
## Usage

```js
import RNBeep from 'react-native-native-sounds';
```
Examples:
```js
<Button onPress={ () => {RNBeep.beep()} } title="Beep Success"></Button>
<Button onPress={ () => {RNBeep.beep(false)} } title="Beep Fail"></Button>
<Button onPress={ () => {RNBeep.PlaySysSound(RNBeep.AndroidSoundIDs.TONE_CDMA_ABBR_ALERT)} } title="Beep Android Custom"></Button>
<Button onPress={ () => {RNBeep.PlaySysSound(41)} } title="Beep Something"></Button>
<Button onPress={ () => {RNBeep.PlaySysSound(RNBeep.iOSSoundIDs.AudioToneBusy)} } title="Beep iOS Custom"></Button>
```

Happy Beep!

FREE!
## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
