package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Sound;

/**
 * A tŭsk standard libary component for defining a sound
 */
class SoundComponent extends Component {
	public var play:Bool = false;

	public var playing:Bool = false;
	public var path:String = "";

	public function new(path:String) {
		this.path = path;
		super();
	}
}