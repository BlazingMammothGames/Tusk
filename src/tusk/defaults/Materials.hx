package tusk.defaults;

import glm.Mat4;

import tusk.resources.Shader;
import tusk.resources.Material;

import promhx.Deferred;
import promhx.Promise;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
#end

class Materials {
	private function new() {}

	public static function loadUnlitTextured():Promise<Material> {
		if(Tusk.assets.isLoaded("unlit.textured")) {
			var d:Deferred<Material> = new Deferred<Material>();
			d.resolve(Tusk.assets.getMaterial("unlit.textured"));
			return d.promise();
		}

		var shader:Shader = new Shader("unlit.textured",
			haxe.Resource.getString("unlit.textured.vert"),
			haxe.Resource.getString("unlit.textured.frag"));
		var mat = new Material("unlit.textured", shader);

		GL.useProgram(mat.shader.program);
		var posLocation:Int = mat.shader.getAttributeLocation("position");
		var uvLocation:Int = mat.shader.getAttributeLocation("uv");

		//mat.onRender = function(projectionMatrix:Mat4, viewMatrix:Mat4, modelMatrix:Mat4, vertexBuffer:GLBuffer, vertexCount:Int) {
		mat.onRender = function(setupUniforms:SetupRenderUniformsCallback, vertexBuffer:GLBuffer, vertexCount:Int) {
			GL.useProgram(mat.shader.program);
			GL.blendFunc(GL.SRC_ALPHA, GL.ONE_MINUS_SRC_ALPHA);

			if(mat.textures != null && mat.textures.length > 0) {
				GL.activeTexture(GL.TEXTURE0);
				GL.bindTexture(GL.TEXTURE_2D, mat.textures[0].texture);
			}

			setupUniforms(mat);

			GL.enableVertexAttribArray(posLocation);
			GL.enableVertexAttribArray(uvLocation);
			GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);

			GL.vertexAttribPointer(posLocation, 3, GL.FLOAT, false, 5*4, 0);
			GL.vertexAttribPointer(uvLocation, 2, GL.FLOAT, false, 5*4, 3*4);

			GL.drawArrays(GL.TRIANGLES, 0, vertexCount);

			GL.bindTexture(GL.TEXTURE_2D, null);
			GL.bindBuffer(GL.ARRAY_BUFFER, null);
			GL.disableVertexAttribArray(posLocation);
			GL.disableVertexAttribArray(uvLocation);
			GL.useProgram(null);
		}

		return Tusk.assets.loadMaterial("unlit.textured", mat);
	}

	public static function loadEffectCircleOut():Promise<Material> {
		if(Tusk.assets.isLoaded("effect.circleout")) {
			var d:Deferred<Material> = new Deferred<Material>();
			d.resolve(Tusk.assets.getMaterial("effect.circleout"));
			return d.promise();
		}

		var shader:Shader = new Shader("effect.circleout",
			haxe.Resource.getString("unlit.textured.vert"),
			haxe.Resource.getString("effect.circleout.frag"));
		var mat = new Material("effect.circleout", shader);

		GL.useProgram(mat.shader.program);
		var posLocation:Int = mat.shader.getAttributeLocation("position");

		//mat.onRender = function(projectionMatrix:Mat4, viewMatrix:Mat4, modelMatrix:Mat4, vertexBuffer:GLBuffer, vertexCount:Int) {
		mat.onRender = function(setupUniforms:SetupRenderUniformsCallback, vertexBuffer:GLBuffer, vertexCount:Int) {
			GL.useProgram(mat.shader.program);
			GL.blendFunc(GL.SRC_ALPHA, GL.ONE_MINUS_SRC_ALPHA);

			setupUniforms(mat);

			GL.enableVertexAttribArray(posLocation);
			GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);

			GL.vertexAttribPointer(posLocation, 3, GL.FLOAT, false, 5*4, 0);

			GL.drawArrays(GL.TRIANGLES, 0, vertexCount);

			GL.bindTexture(GL.TEXTURE_2D, null);
			GL.bindBuffer(GL.ARRAY_BUFFER, null);
			GL.disableVertexAttribArray(posLocation);
			GL.useProgram(null);
		}

		return Tusk.assets.loadMaterial("effect.circleout", mat);
	}
}