package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class SoundProcessor extends Processor {
	/**
	 * Create a new processor with the given matcher
	 * @param  entities a list of all current entities in the game
	 */
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(SoundComponent);
		super(entities);
	}
	
	/**
	 * Override to hook into the `update` event
	 * @param  entities<Entity> the list of entities that match this system
	 */
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var sound:SoundComponent = cast entity.get(SoundComponent);
			if(!sound.playing) {
				sound.playing = true;
				Log.info("Playing sound: '" + sound.id + "'...");
				//Tusk.instance.app.audio.play(sound.id);
			}
		}
	}
}